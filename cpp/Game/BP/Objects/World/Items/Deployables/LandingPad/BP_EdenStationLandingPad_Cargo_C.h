// /Game/BP/Objects/World/Items/Deployables/LandingPad/BP_EdenStationLandingPad_Cargo.BP_EdenStationLandingPad_Cargo_C
// Derives from: ABP_Exotic_Delivery_Interface_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x818, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_EdenStationLandingPad_Cargo_C : public ABP_Exotic_Delivery_Interface_C, public ICargoLandingPadSnapInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CommDevice;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_D;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_C;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_B;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_LandingPad_T4_Base_Metal;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LandingPoint;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B3;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A3;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A2;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B2;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B1;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A1;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCargoLandingPadComponent* CargoLandingPad;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Left_Slot;  // 0x0808, size 0x8, named "Left Slot"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Right_Slot;  // 0x0810, size 0x8, named "Right Slot"

    UFUNCTION() void ExecuteUbergraph_BP_EdenStationLandingPad_Cargo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Generate_Spawn_Pod_Location(ABP_Transport_Pod_Base_C* TransportPod);  // parameters 0x8, named "Generate Spawn Pod Location"
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetSnapPoint(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsEdenPad() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
