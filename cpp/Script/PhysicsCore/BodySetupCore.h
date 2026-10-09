// /Script/PhysicsCore.BodySetupCore
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/PhysicsCore/Public/BodySetupCore.h

UCLASS()
class UBodySetupCore : public UObject
{
public:
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EPhysicsType> PhysicsType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBodyCollisionResponse> CollisionReponse;  // 0x0032, size 0x1
    TArray<physx::PxTriangleMesh *,TSizedDefaultAllocator<32> > TriMeshes;  // 0x0038, not reflected
};
