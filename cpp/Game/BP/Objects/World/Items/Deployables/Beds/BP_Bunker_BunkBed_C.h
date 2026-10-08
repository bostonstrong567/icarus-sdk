// /Game/BP/Objects/World/Items/Deployables/Beds/BP_Bunker_BunkBed.BP_Bunker_BunkBed_C
// Derives from: ABP_BedBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x771, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bunker_BunkBed_C : public ABP_BedBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasSpawnedTopBunk_New;  // 0x0770, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Bunker_BunkBed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetBestBedToMigrateUIDsTo(ABP_Bunker_BunkBed_C*& BestBed);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void OnRegisteredWithPrebuiltStructure(APrebuiltStructure* Prebuilt);  // parameters 0x8
};
