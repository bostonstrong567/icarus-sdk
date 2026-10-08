// /Script/Engine.Brush
// Derives from: AActor > UObject
// size 0x258, declared in Engine/Source/Runtime/Engine/Classes/Engine/Brush.h

UCLASS(Config=Engine)
class ABrush : public AActor
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBrushType> BrushType;  // 0x0220, size 0x1
    UPROPERTY() FColor BrushColor;  // 0x0224, size 0x4
    UPROPERTY() int32 PolyFlags;  // 0x0228, size 0x4
    UPROPERTY() uint8 bColored : 1;  // 0x022C, mask 0x01
    UPROPERTY() uint8 bSolidWhenSelected : 1;  // 0x022C, mask 0x02
    UPROPERTY() uint8 bPlaceableFromClassBrowser : 1;  // 0x022C, mask 0x04
    UPROPERTY() uint8 bNotForClientOrServer : 1;  // 0x022C, mask 0x08
    UPROPERTY(Instanced) UModel* Brush;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UBrushComponent* BrushComponent;  // 0x0238, size 0x8
    UPROPERTY() uint8 bInManipulation : 1;  // 0x0240, mask 0x01
    UPROPERTY() TArray<FGeomSelection> SavedSelections;  // 0x0248, size 0x10

    // Virtual functions that start here:
    //   GetWireColor, IsBrushShape, IsStaticBrush, IsVolumeBrush, RebuildNavigationData
};
