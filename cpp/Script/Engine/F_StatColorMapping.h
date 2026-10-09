// /Script/Engine.StatColorMapping
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FStatColorMapping
{
public:
    UPROPERTY(Config) FString StatName;  // 0x0000, size 0x10
    UPROPERTY(Config) TArray<FStatColorMapEntry> ColorMap;  // 0x0010, size 0x10
    UPROPERTY(Config) uint8 DisableBlend : 1;  // 0x0020, mask 0x01
};
