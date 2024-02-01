# Unreal Plugin for READYgg

## Overview
This repository hosts the Unreal Plugin for READYgg, enabling developers to integrate READYgg functionalities into their Unreal Engine projects. The plugin is compatible with Unreal Engine versions 4 and 5 and supports development for Android and iOS platforms.

## Getting Started
### Setting Up Your READYgg Project
1. Visit the [READYgg Developer Console](https://dev.ready.gg/) to create a new project. 
2. Once your project is created, navigate to the projects page and copy the Project ID from the browser address field.
3. The project is created for both environments: `Staging` and `Production`

### Configuring the Unreal Plugin
1. Check out the repository and compile the project
2. In the Unreal Editor, go to `Project Settings` (is located in the Edit menu).
3. Under `Plugins`, find `ReadyGamesNetwork`.
4. Paste the copied Project ID into the `Project Id` field.
5. Choose your environment: `Staging` or `Production`.

## Opening the Project
- **For Windows Users:**
  1. Right-click on `rgn_unreal.uproject` in the root of the repository.
  2. Select `Generate Visual Studio project files`.
  3. Open `rgn_unreal.sln` in Visual Studio for code review and debugging.

- **General:**
  - Open `rgn_unreal.uproject` to start working with the project in Unreal Editor.

## Important paths
- **Plugin Source Path:** `Plugins/ReadyGamesNetwork`
- **READYgg Settings file:** `Config/DefaultGame.ini`

## Screenshots
- **In-Editor App Running:**
  ![image](https://github.com/readyio/rgn_unreal/assets/109844845/a2056ef6-bca6-46b2-9f3d-cfbe3082ab29)

- **Using RGN Modules Functionality from Blueprints:**
  ![image](https://github.com/readyio/rgn_unreal/assets/109844845/3fc7aa8f-fac3-4d49-8ec5-edb2cc7b8f5b)

- **Blueprint UI Implementation (`All/Content/Widgets`):**
  ![image](https://github.com/readyio/rgn_unreal/assets/109844845/7e3330ed-49d5-4597-964a-55da20a37e0b)


## Authentication Functionality
- **Testing in Editor:**
  - Use `Basic Sign In` for authentication testing within the editor.
- **Testing on Mobile:**
  - Use the `Sign In` option for web form authentication and token retrieval via deeplink (supported on Android and iOS).
  - Alternatively, select `Sign In Anonymously`.

![image](https://github.com/readyio/rgn_unreal/assets/109844845/0f21bd8c-eb7e-4a59-8a2c-bd77bc4cf367)


## Support and Issues
- For any issues encountered, refer to the `Issues` section of this repository.
- You can also contact RGN developers directly.
