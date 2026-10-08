// /Script/Icarus.TreePrefab
// Derives from: AActor > UObject
// size 0x350, declared in Icarus/Source/Icarus/Objects/TreePrefab.h

UCLASS(Config=Engine)
class ATreePrefab : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* RootScene;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ETreePrimitiveType, FItemRewardsRowHandle> TreePrimitiveTypesToItemRewards;  // 0x0228, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ATreeBase> RuntimeTreeClass;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UTreePrimitiveComponent> RuntimeTreePrimitiveClass;  // 0x0280, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bHasConstructedRootHierarchy;  // 0x0288, protected
    ATreePrefab::FTreePrimitiveConstructionHierarchy RootHierarchyNode;  // 0x0290, protected
    TMap<FName,ATreePrefab::FTreePrimitiveConstructionHierarchy *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ATreePrefab::FTreePrimitiveConstructionHierarchy *,0> > HierarchyMapping;  // 0x02F0, protected
    TArray<FName,TSizedDefaultAllocator<32> > HierarchyNames;  // 0x0340, protected

    UFUNCTION(BlueprintCallable) bool ConstructTreePrimitives(ATreeBase* TreeRuntime, const FTreeRuntimeConstructArguments& Args);  // parameters 0x41
    UFUNCTION(BlueprintCallable) ATreeBase* CreateTreeRuntime(const FTreeRuntimeCreateArguments& Args);  // parameters 0x88
    UFUNCTION(BlueprintNativeEvent) void OnCreatedTreeRuntime(ATreeBase* TreeBase);  // parameters 0x8

    // Virtual functions that start here:
    //   OnCreatedTreeRuntime_Implementation
};
