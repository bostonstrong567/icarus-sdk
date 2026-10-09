// /Script/Icarus.Subtitle
// size 0x38, declared in Icarus/Source/Icarus/Systems/Dialogue/Subtitle.h

USTRUCT()
struct FSubtitle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SpeakerName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Length;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0034, size 0x4
};
