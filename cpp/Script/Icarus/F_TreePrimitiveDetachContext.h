// /Script/Icarus.TreePrimitiveDetachContext
// size 0x18, declared in Icarus/Source/Icarus/Objects/TreePrimitiveComponent.h

USTRUCT()
struct FTreePrimitiveDetachContext
{
    UPROPERTY(BlueprintReadWrite) ETreePrimitiveDetachContext DetachContext;  // 0x0000, size 0x1
    UPROPERTY(BlueprintReadWrite) AActor* CollisionActor;  // 0x0008, size 0x8
    UPROPERTY(BlueprintReadWrite) AIcarusPlayerCharacter* ActionPlayer;  // 0x0010, size 0x8
};
