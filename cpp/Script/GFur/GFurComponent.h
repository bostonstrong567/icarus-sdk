// /Script/GFur.GFurComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x640, declared in Engine/Plugins/Marketplace/GFurPRO/Source/GFur/Public/FurComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UGFurComponent : public UMeshComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* SkeletalGrowMesh;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* StaticGrowMesh;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFurSplines* FurSplines;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMesh*> SkeletalGuideMeshes;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> StaticGuideMeshes;  // 0x04A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LayerCount;  // 0x04B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinScreenSize;  // 0x04B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFurLod> LODs;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LODFromParent;  // 0x04C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShellBias;  // 0x04CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FurLength;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFurLength;  // 0x04D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RemoveFacesWithoutSplines;  // 0x04D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PhysicsEnabled;  // 0x04D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForceDistribution;  // 0x04DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Stiffness;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damping;  // 0x04E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ConstantForce;  // 0x04E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxForce;  // 0x04F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxForceTorqueFactor;  // 0x04F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReferenceHairBias;  // 0x04FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HairLengthForceUniformity;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPhysicsOffsetLength;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NoiseStrength;  // 0x0508, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableMorphTargets;  // 0x050C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StreamingDistanceMultiplier;  // 0x0510, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> MasterPoseComponent;  // 0x0514, private
    TArray<TArray<int,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > MasterBoneMap;  // 0x0520, private
    TArray<FMatrix,TSizedDefaultAllocator<32> > ReferenceToLocal;  // 0x0530, private
    TArray<FMatrix,TSizedDefaultAllocator<32> > Transformations;  // 0x0540, private
    TArray<FVector,TSizedDefaultAllocator<32> > LinearVelocities;  // 0x0550, private
    TArray<FVector,TSizedDefaultAllocator<32> > AngularVelocities;  // 0x0560, private
    TArray<FVector,TSizedDefaultAllocator<32> > LinearOffsets;  // 0x0570, private
    TArray<FVector,TSizedDefaultAllocator<32> > AngularOffsets;  // 0x0580, private
    TArray<UMaterialInstanceDynamic *,TSizedDefaultAllocator<32> > FurMaterials;  // 0x0590, private
    TArray<FFurData *,TSizedDefaultAllocator<32> > FurData;  // 0x05A0, private
    TArray<TArray<int,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > MorphRemapTables;  // 0x05B0, private
    FVector StaticLinearOffset;  // 0x05C0, private
    FVector StaticAngularOffset;  // 0x05CC, private
    FVector StaticLinearVelocity;  // 0x05D8, private
    FVector StaticAngularVelocity;  // 0x05E4, private
    FMatrix StaticTransformation;  // 0x05F0, private
    bool OldPositionValid;  // 0x0630, private
    int32 LastLOD;  // 0x0634, private
    float LastDeltaTime;  // 0x0638, private
    uint32 LastRevisionNumber;  // 0x063C, private

    UFUNCTION(BlueprintCallable) bool CheckGFurSetupIsValid();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegenerateFur();
};
