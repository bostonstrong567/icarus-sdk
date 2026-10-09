// /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// size 0x30, declared in Engine/Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h

USTRUCT()
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
public:
    UPROPERTY() uint8 bEnableLookAtTracking : 1;  // 0x0000, mask 0x01
    UPROPERTY() uint8 bAllowRoll : 1;  // 0x0000, mask 0x02
    UPROPERTY() TSoftObjectPtr<AActor> ActorToTrack;  // 0x0008, size 0x28
};
