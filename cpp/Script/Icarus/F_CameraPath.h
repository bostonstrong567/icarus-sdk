// /Script/Icarus.CameraPath
// size 0x28, declared in Icarus/Source/Icarus/CameraPath/CameraPathTypes.h

USTRUCT()
struct FCameraPath
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PathName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCapturedFOV;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCameraPathSample> Samples;  // 0x0018, size 0x10
};
