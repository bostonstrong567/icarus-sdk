// /Game/BP/Audio/PlayerMovement/FBoneAudioSetting.FBoneAudioSetting
// size 0x30

USTRUCT()
struct FBoneAudioSetting
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Bone;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ReferenceBone;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* AudioEvent;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachPoint;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinVelocity;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxVelocity;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAudioEquipmentType> EquipmentType;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAudioPlayerPerspective> Perspective;  // 0x0029, size 0x1
};
