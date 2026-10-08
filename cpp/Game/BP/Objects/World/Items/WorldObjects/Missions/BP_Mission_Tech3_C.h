// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Tech3.BP_Mission_Tech3_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x388, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Tech3_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight2;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_V2_FX;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0368, size 0x8
    UPROPERTY() float Timeline_0_NewTrack_0_368043F24D8439F365E3EB8541381413;  // 0x0370, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_368043F24D8439F365E3EB8541381413;  // 0x0374, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Drone_Material;  // 0x0380, size 0x8, named "Drone Material"

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Tech3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
};
