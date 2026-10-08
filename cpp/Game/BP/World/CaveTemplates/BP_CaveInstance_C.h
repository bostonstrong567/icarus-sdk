// /Game/BP/World/CaveTemplates/BP_CaveInstance.BP_CaveInstance_C
// Derives from: ACave > AActor > UObject
// size 0x288, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveInstance_C : public ACave, public ICaveInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_CaveComponent_C* BP_CaveComponent;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool Debug;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_CaveEntranceComponent_C*> Entrances;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBoxComponent*> Volumes;  // 0x0250, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabTransform> VolumeData;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabTransform> EntranceData;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* DebugMeshRef;  // 0x0280, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_CaveInstance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetCurrentSpelunkingDepth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetSpelunkingDepthFromLocation(FVector Location) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ToggleDebugDraw();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
