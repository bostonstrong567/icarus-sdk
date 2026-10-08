// /Script/LiveLinkInterface.LiveLinkSourcePreset
// size 0x30, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkPresetTypes.h

USTRUCT()
struct FLiveLinkSourcePreset
{
    UPROPERTY(EditAnywhere) FGuid Guid;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) ULiveLinkSourceSettings* Settings;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) FText SourceType;  // 0x0018, size 0x18
};
