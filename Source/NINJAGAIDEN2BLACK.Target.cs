// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class NINJAGAIDEN2BLACKTarget : TargetRules
{
	public NINJAGAIDEN2BLACKTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "NINJAGAIDEN2BLACK" } );
	}
}
