// /Script/UMG.SlateVectorArtData
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Slate/SlateVectorArtData.h

UCLASS()
class USlateVectorArtData : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FSlateMeshVertex> VertexData;  // 0x0028, size 0x10
    UPROPERTY() TArray<uint32> IndexData;  // 0x0038, size 0x10
    UPROPERTY() UMaterialInterface* Material;  // 0x0048, size 0x8
    UPROPERTY() FVector2D ExtentMin;  // 0x0050, size 0x8
    UPROPERTY() FVector2D ExtentMax;  // 0x0058, size 0x8
};
