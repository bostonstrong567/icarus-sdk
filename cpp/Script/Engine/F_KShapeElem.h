// /Script/Engine.KShapeElem
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h

USTRUCT()
struct FKShapeElem
{
    UPROPERTY(EditAnywhere) float RestOffset;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FName Name;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere) uint8 bContributeToMass : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionEnabled> CollisionEnabled;  // 0x0019, size 0x1

    // Not reflected:
    EAggCollisionShape::Type ShapeType;  // 0x0014
    FPhysxUserData UserData;  // 0x0020
};
