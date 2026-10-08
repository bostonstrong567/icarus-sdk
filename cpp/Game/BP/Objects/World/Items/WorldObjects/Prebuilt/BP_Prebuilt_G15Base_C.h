// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_Prebuilt_G15Base.BP_Prebuilt_G15Base_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x430, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prebuilt_G15Base_C : public ABP_Prebuilt_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0428, size 0x8

    UFUNCTION(BlueprintCallable) void BuildingComplete();
    UFUNCTION() void ExecuteUbergraph_BP_Prebuilt_G15Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillCrates();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void PrepareStructure();
};
