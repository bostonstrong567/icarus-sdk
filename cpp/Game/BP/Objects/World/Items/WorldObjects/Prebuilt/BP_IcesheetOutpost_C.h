// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_IcesheetOutpost.BP_IcesheetOutpost_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcesheetOutpost_C : public ABP_Prebuilt_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Note3;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Note2;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Note1;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Notes;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Body4;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Body3;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Body2;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Body1;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0470, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcesheetOutpost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillCrates();
    UFUNCTION(BlueprintCallable) void Fix_Highlightable();
    UFUNCTION(BlueprintCallable) void GetChest(AIcarusItem*& Array_Element);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void SpawnBodies();
    UFUNCTION(BlueprintCallable) void SpawnNotes();
};
