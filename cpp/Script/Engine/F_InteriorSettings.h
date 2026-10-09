// /Script/Engine.InteriorSettings
// size 0x24, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioVolume.h

USTRUCT()
struct FInteriorSettings
{
public:
    UPROPERTY() bool bIsWorldSettings;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExteriorVolume;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExteriorTime;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExteriorLPF;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExteriorLPFTime;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteriorVolume;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteriorTime;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteriorLPF;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteriorLPFTime;  // 0x0020, size 0x4
};
