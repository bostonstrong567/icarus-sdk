// /Script/Engine.BrushComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x460, declared in Engine/Source/Runtime/Engine/Classes/Components/BrushComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UBrushComponent : public UPrimitiveComponent
{
public:
    UPROPERTY() UModel* Brush;  // 0x0450, size 0x8
    UPROPERTY() UBodySetup* BrushBodySetup;  // 0x0458, size 0x8
};
