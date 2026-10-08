// /Script/Icarus.TreePrimitiveComponent
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x520, declared in Icarus/Source/Icarus/Objects/TreePrimitiveComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UTreePrimitiveComponent : public UStaticMeshComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CalculatedMass;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CalculatedDescendantsMass;  // 0x04E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CalculatedTotalConnectedMass;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTreePrimitiveReplacementDescription> ReplacementDescriptions;  // 0x04F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDestroyOnOrphan;  // 0x0500, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CollisionProfileWhenActive;  // 0x0504, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTreePrimitivePersistentData PersistentData;  // 0x050C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TreePrimitiveName;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETreePrimitiveType TreePrimitiveType;  // 0x0518, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanSupportTreeHierarchy() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void Construct(UStaticMeshComponent* MeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void InitializePostConstruction();
    UFUNCTION(BlueprintCallable) void RecalculateMass();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ReplaceTreePrimitiveWithItem(const FTreePrimitiveDetachContext& DetachContext, AIcarusItem*& OutItemActor);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupCollisionProfile(bool bEnabled, bool bIsDynamic);  // parameters 0x2
    UFUNCTION(BlueprintNativeEvent) bool ShouldTreePrimivieAffectNavigation() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void Transfer(UTreePrimitiveComponent* Source);  // parameters 0x8

    // Virtual functions that start here:
    //   CanSupportTreeHierarchy_Implementation, Construct_Implementation
    //   InitializePostConstruction_Implementation, ReplaceTreePrimitiveWithItem_Implementation
    //   ShouldTreePrimivieAffectNavigation_Implementation, Transfer_Implementation
};
