// /Script/GFur.FurSplines
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/Marketplace/GFurPRO/Source/GFur/Public/FurSplines.h

UCLASS()
class UFurSplines : public UObject
{
public:
    UPROPERTY() TArray<FVector> Vertices;  // 0x0028, size 0x10
    UPROPERTY() TArray<int32> Index;  // 0x0038, size 0x10
    UPROPERTY() TArray<int32> Count;  // 0x0048, size 0x10
    UPROPERTY() int32 ControlPointCount;  // 0x0058, size 0x4
    UPROPERTY() FString ImportFilename;  // 0x0060, size 0x10
    UPROPERTY() int32 Version;  // 0x0070, size 0x4
    UPROPERTY() int32 ImportTransformation;  // 0x0074, size 0x4
    UPROPERTY() float Threshold;  // 0x0078, size 0x4
};
