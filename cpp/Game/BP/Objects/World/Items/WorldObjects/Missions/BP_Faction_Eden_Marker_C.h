// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Eden_Marker.BP_Faction_Eden_Marker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x379, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Eden_Marker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Single_Ceiling_Light;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_STN_ControlPanel_041;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_STN_ControlPanel_04;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Beacon_SM_DEP_Beacon;  // 0x0350, size 0x8, named "SM_DEP_Beacon.SM_DEP_Beacon"
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* HorizontalFlag;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Active;  // 0x0378, size 0x1

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Eden_Marker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_Active();
    UFUNCTION(BlueprintCallable) void UpdateFlag();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
