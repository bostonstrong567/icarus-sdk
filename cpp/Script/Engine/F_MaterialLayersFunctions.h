// /Script/Engine.MaterialLayersFunctions
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h

USTRUCT()
struct FMaterialLayersFunctions
{
    UPROPERTY(EditAnywhere) TArray<UMaterialFunctionInterface*> Layers;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<UMaterialFunctionInterface*> Blends;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<bool> LayerStates;  // 0x0020, size 0x10
    UPROPERTY(Deprecated) FString KeyString;  // 0x0030, size 0x10
};
