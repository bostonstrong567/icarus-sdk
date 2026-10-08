// /Game/BP/Objects/World/BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C
// Derives from: AMetaSpawnActor > AIcarusActor > AActor > UObject
// size 0x318, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusMetaSpawn_C : public AMetaSpawnActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* MetaNode;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* PreviewMeta;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaResourceNodesRowHandle Meta_Node_Handle;  // 0x02E0, size 0x18, named "Meta Node Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExoticSpawnEnum Spawn_Identifier;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool ShowMeshPreview;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Group;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* LocatorMesh;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCallable) void CheckRowHandles();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusMetaSpawn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideEditorLocator();
    UFUNCTION(BlueprintCallable) void OnLoaded_51F87C0E46A04C7697E3B98B88978D42(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ShowEditorLocator();
    UFUNCTION(BlueprintCallable) void Spawn(int32 MetaAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TogglePreview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
