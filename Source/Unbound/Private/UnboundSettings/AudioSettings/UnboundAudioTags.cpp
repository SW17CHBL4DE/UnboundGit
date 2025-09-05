// © MMXXV SLMWRX. All Rights Reserved

// UNBOUND SOURCE
#include "UnboundSettings/AudioSettings/UnboundAudioTags.h"

namespace UnboundAudio
{
	UE_DEFINE_GAMEPLAY_TAG(UnboundAudio, "UnboundAudio");
	
	namespace AudioSettings
	{
		UE_DEFINE_GAMEPLAY_TAG(UnboundAudioSett_SubMix, "UnboundAudio.Settings.SubMix");
		UE_DEFINE_GAMEPLAY_TAG(UnboundAudioSett_Master, "UnboundAudio.Settings.MasterVolume");
		UE_DEFINE_GAMEPLAY_TAG(UnboundAudioSett_Music, "UnboundAudio.Settings.MusicVolume");
		UE_DEFINE_GAMEPLAY_TAG(UnboundAudioSett_SFX, "UnboundAudio.Settings.SFXVolume");
		UE_DEFINE_GAMEPLAY_TAG(UnboundAudioSett_UI, "UnboundAudio.Settings.UIVolume");
	}
}