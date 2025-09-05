// © MMXXV SLMWRX. All Rights Reserved

#pragma once

#include "NativeGameplayTags.h"

namespace UnboundAudio
{
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(UnboundAudio);
	
	namespace AudioSettings
	{
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(UnboundAudioSett_SubMix);
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(UnboundAudioSett_Master);
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(UnboundAudioSett_Music);
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(UnboundAudioSett_SFX);
		UE_DECLARE_GAMEPLAY_TAG_EXTERN(UnboundAudioSett_UI);
	}
}

UENUM(Blueprintable)
enum class EAudioClass : uint8
{
	EAUXC_Master	= 0 UMETA(DisplayName = "Master"),
	EAUXC_Music		= 1 UMETA(DisplayName = "Music"),
	EAUXC_SFX		= 2 UMETA(DisplayName = "SFX"),
	EAUXC_UI		= 4 UMETA(DisplayName = "UI")
};
