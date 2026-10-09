// /Game/BP/Audio/PlayerMovement/FLadderClimbAnimNotifyData.FLadderClimbAnimNotifyData
// size 0x8

USTRUCT()
struct FLadderClimbAnimNotifyData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAudioPlayerPerspective> Perspective;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAudioPlayerAppendageType> HandOrFoot;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ReversePlay;  // 0x0006, size 0x1
};
