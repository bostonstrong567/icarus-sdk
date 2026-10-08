// /Script/Engine.PhysicsAsset
// Derives from: UObject
// size 0x138, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h

UCLASS(MinimalAPI)
class UPhysicsAsset : public UObject, public IInterface_PreviewMeshProvider
{
public:
    UPROPERTY() TArray<int32> BoundsBodies;  // 0x0030, size 0x10
    UPROPERTY() TArray<USkeletalBodySetup*> SkeletalBodySetups;  // 0x0040, size 0x10
    UPROPERTY() TArray<UPhysicsConstraintTemplate*> ConstraintSetup;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) FSolverIterations SolverIterations;  // 0x0060, size 0x1C
    UPROPERTY(EditAnywhere) EPhysicsAssetSolverType SolverType;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bNotForDedicatedServer : 1;  // 0x007D, mask 0x01
    UPROPERTY(EditAnywhere, Instanced) UThumbnailInfo* ThumbnailInfo;  // 0x0120, size 0x8
    UPROPERTY(Deprecated) TArray<UBodySetup*> BodySetup;  // 0x0128, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0> > BodySetupIndexMap;  // 0x0080
    TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0> > CollisionDisableTable;  // 0x00D0
};
