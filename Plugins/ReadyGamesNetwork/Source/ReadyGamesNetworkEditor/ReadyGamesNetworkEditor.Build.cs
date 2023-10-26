using System.IO;
using UnrealBuildTool;

public class ReadyGamesNetworkEditor : ModuleRules
{
	public ReadyGamesNetworkEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"ReadyGamesNetwork",
				"Core",
				"CoreUObject",
				"UnrealEd",
			}
		);
	}
}
