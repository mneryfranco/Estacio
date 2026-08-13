# Configurando o Obsidian Git

Este guia explica como conectar o Obsidian (PC e celular) direto a este
repositório GitHub, para que você possa ler e editar os arquivos da pasta
`Estacio/` com a experiência completa do Obsidian (backlinks, grafo, etc.),
mantendo tudo sincronizado via git.

> A partir de agora, **este repositório é a fonte da verdade** dos estudos.
> A pasta antiga do Google Drive (`H:\My Drive\Obsidian\Estacio`) não é mais
> atualizada por aqui — evite editar as duas em paralelo para não gerar
> conflitos.

## Pré-requisito: criar um Personal Access Token (PAT) no GitHub

O repositório é privado, então tanto o PC quanto o celular vão precisar de
um token para autenticar (em vez da sua senha do GitHub).

1. Acesse https://github.com/settings/tokens?type=beta (fine-grained tokens)
2. **Generate new token**
3. Repository access → **Only select repositories** → escolha `Estacio`
4. Em **Permissions**, dê **Read and write** para "Contents"
5. Gere o token e **copie e guarde em local seguro** (ele some depois de
   fechar a página — você pode usar um gerenciador de senhas)

Esse token funciona como sua "senha" nos passos abaixo.

## No PC (Windows)

1. Instale o [Git para Windows](https://git-scm.com/download/win) se ainda
   não tiver (o plugin do desktop usa o git instalado no sistema).
2. Escolha uma pasta local **fora** do Google Drive, por exemplo
   `C:\Estudos\Estacio`, e clone o repositório nela:
   ```
   git clone https://github.com/mneryfranco/Estacio.git C:\Estudos\Estacio
   ```
   Quando pedir usuário/senha, use seu usuário do GitHub e **cole o PAT no
   lugar da senha**.
3. Abra o Obsidian → **Open folder as vault** → selecione `C:\Estudos\Estacio`.
4. Vá em **Settings → Community plugins**, desative o modo restrito, clique
   em **Browse** e procure por **"Git"** (plugin de Vinzent03). Instale e
   ative.
5. Nas configurações do plugin **Obsidian Git**, sugestões úteis:
   - **Auto pull on boot**: liga, pra sempre abrir com a versão mais recente
   - **Auto backup after file change** ou um intervalo (ex: a cada 10 min):
     liga, pra não esquecer de commitar
   - **Pull before push**: liga, evita conflitos
6. Pronto — o plugin cuida do commit/push automaticamente, ou você pode
   rodar manualmente pela paleta de comandos (`Ctrl+P`): "Git: Commit all
   changes" e "Git: Push".

## No celular (Android/iOS)

No celular o plugin não depende de um git externo instalado (usa uma
implementação própria em JS), mas a configuração inicial é manual:

1. Instale o app **Obsidian** (Play Store / App Store).
2. Crie um vault novo vazio (ex: "Estacio").
3. Vá em **Settings → Community plugins → Browse**, procure **"Git"** e
   instale/ative o mesmo plugin **Obsidian Git**.
4. Abra a paleta de comandos e rode **"Git: Clone an existing remote
   repo"**.
   - URL do repositório: `https://github.com/mneryfranco/Estacio.git`
   - Usuário: seu usuário do GitHub
   - Senha: **cole o PAT** (não a senha da conta)
5. Configure os mesmos intervalos de auto pull/push do passo 5 do PC, para
   manter tudo sincronizado sozinho.

## Fluxo do dia a dia

- **Eu** (aqui no chat) crio/edito resumos, exercícios e materiais direto
  no repositório e dou push a cada mudança.
- **Você** só precisa abrir o Obsidian (PC ou celular) — o plugin puxa
  (`pull`) as novidades automaticamente.
- Se você editar algo direto no Obsidian, o plugin comita e sobe (`push`)
  sozinho no intervalo configurado, ou você força manualmente.

## Problemas comuns

- **"Authentication failed"**: o PAT expirou ou foi digitado errado — gere
  um novo em https://github.com/settings/tokens?type=beta.
- **Conflito de merge**: geralmente acontece se você editou o mesmo arquivo
  no PC e no celular sem sincronizar entre as edições. O plugin avisa e
  permite resolver manualmente, ou trave a edição em um dispositivo por vez.
