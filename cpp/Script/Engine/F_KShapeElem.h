// /Script/Engine.KShapeElem
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h

USTRUCT()
struct FKShapeElem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) float RestOffset;  // 0x0008, size 0x4
private:
    UPROPERTY(EditAnywhere) FName Name;  // 0x000C, size 0x8
    EAggCollisionShape::Type ShapeType;  // 0x0014, not reflected
    UPROPERTY(EditAnywhere) uint8 bContributeToMass : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionEnabled> CollisionEnabled;  // 0x0019, size 0x1
    FPhysxUserData UserData;  // 0x0020, not reflected
};
