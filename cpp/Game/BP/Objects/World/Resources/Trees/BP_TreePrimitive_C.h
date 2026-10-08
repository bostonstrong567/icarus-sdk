// /Game/BP/Objects/World/Resources/Trees/BP_TreePrimitive.BP_TreePrimitive_C
// Derives from: UTreePrimitiveComponent > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x571, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_TreePrimitive_C : public UTreePrimitiveComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0520, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_TreeBase_C* TreeOwner;  // 0x0528, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle ReplacementRewardsRowHandle;  // 0x0530, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SubdivideCopyMeshTransform;  // 0x0548, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SubdivideImmediately;  // 0x0549, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSoftBranch;  // 0x054A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PrimitiveWidth;  // 0x054C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SoftBranchMassThreshold;  // 0x0550, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsNavigationRelevant;  // 0x0554, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UDecalComponent*> DecalComponents;  // 0x0558, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AIcarusItem> ReplacementItemClass;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AddFrostedAlteration;  // 0x0570, size 0x1

    UFUNCTION(BlueprintCallable) void AddItemToPlayerInventory(FTreePrimitiveReplacementDescription& ReplacementDescription, AIcarusPlayerCharacter* PlayerCharacter, bool& Success);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void AddReplacementDescription(ETreePrimitiveDetachContext DetachContext, ETreePrimitiveItemReplaceMethod Method);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanSupportTreeHierarchy() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Collect_Segment(const FTreePrimitiveDetachContext& DetachContext);  // parameters 0x19, named "Collect Segment"
    UFUNCTION(BlueprintImplementableEvent) void Construct(UStaticMeshComponent* MeshComponent);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_TreePrimitive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetReplacementDescriptionForContext(ETreePrimitiveDetachContext DetachContext, FTreePrimitiveReplacementDescription& ReplacementDescription);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetSubdivideMeshData(bool& Found, TreePrimitiveSubdivideMeshes& SubdivideMeshes);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void InitializePostConstruction();
    UFUNCTION(BlueprintCallable) void OnComponentHit_Branch(UPrimitiveComponent* Primitive, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void OnComponentHit_Trunk(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void OnComponentOverlap_Branch(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ReplaceTreePrimitiveWithItem(const FTreePrimitiveDetachContext& DetachContext, AIcarusItem*& OutItemActor);  // parameters 0x21
    UFUNCTION(BlueprintCallable) bool ShouldAutoPickupReplacementItem(AIcarusCharacter* ContextActionPlayer);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldTreePrimivieAffectNavigation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnReplacementItemActor(FTreePrimitiveReplacementDescription& ReplacementDescription, AIcarusPlayerCharacter* DetachmentContextPlayer, AIcarusItem*& SpawnedItemActor, bool& Success);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void Transfer(UTreePrimitiveComponent* Source);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TryGrantFrostedAlteration(UIcarusStatContainer* StatContainer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateSoftBranchState(bool CanBeSoft);  // parameters 0x1
};
