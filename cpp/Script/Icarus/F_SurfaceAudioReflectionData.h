// /Script/Icarus.SurfaceAudioReflectionData
// size 0xC, declared in Icarus/Source/Icarus/Audio/Reflections/SurfaceAudioReflectionData.h

USTRUCT()
struct FSurfaceAudioReflectionData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReflectionMultiplier;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LowFrequencies;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HighFrequencies;  // 0x0008, size 0x4
};
