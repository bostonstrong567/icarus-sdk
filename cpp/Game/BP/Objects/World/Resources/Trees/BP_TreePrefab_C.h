// /Game/BP/Objects/World/Resources/Trees/BP_TreePrefab.BP_TreePrefab_C
// Derives from: ATreePrefab > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreePrefab_C : public ATreePrefab
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugRuntimeInstance;  // 0x0358, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugInstancePhysicsDynamic;  // 0x0359, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DebugInstanceTreeRootName;  // 0x035C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TreeSetupProperties SetupProperties;  // 0x0368, size 0x140
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> LoadedSubdivideMeshes;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SubdivideMeshesLoaded;  // 0x04B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DebugInstanceFallDirection;  // 0x04BC, size 0xC

    UFUNCTION(BlueprintCallable) void CheckLoadedSubdivideMeshes();
    UFUNCTION(BlueprintCallable) void DebugInstanceTreeImp(FTreeRuntimeCreateArguments Args);  // parameters 0x80
    UFUNCTION() void ExecuteUbergraph_BP_TreePrefab(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnCreatedTreeRuntime(ATreeBase* TreeBase);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_725FB44141605CD1726AD5A5598E8E8C(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PreloadSubdivideMeshes();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetupPrimitiveDynamicMaterials(UPrimitiveComponent* Primitive, FVector PivotPosition);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
