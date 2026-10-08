// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Drone_Drop.BP_Drone_Drop_C
// Derives from: ABP_Overflow_Bag_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Drone_Drop_C : public ABP_Overflow_Bag_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_R;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecayableComponent* Decayable;  // 0x03C8, size 0x8
    UPROPERTY() float Timeline_0_Alpha1_6E2E86E447B64D25D52E8AA96243022A;  // 0x03D0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_6E2E86E447B64D25D52E8AA96243022A;  // 0x03D4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x03D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Drone_Drop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
};
