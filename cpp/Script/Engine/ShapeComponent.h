// /Script/Engine.ShapeComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Engine/Classes/Components/ShapeComponent.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class UShapeComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(Transient) UBodySetup* ShapeBodySetup;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavAreaBase> AreaClass;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor ShapeColor;  // 0x0460, size 0x4
    UPROPERTY() uint8 bDrawOnlyIfSelected : 1;  // 0x0464, mask 0x01
    UPROPERTY() uint8 bShouldCollideWhenPlacing : 1;  // 0x0464, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bDynamicObstacle : 1;  // 0x0464, mask 0x04
protected:
    uint8 : 1 bUseArchetypeBodySetup;  // 0x0464, not reflected

    // Virtual functions that start here:
    //   UpdateBodySetup
};
