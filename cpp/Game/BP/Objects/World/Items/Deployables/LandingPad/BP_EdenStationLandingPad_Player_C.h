// /Game/BP/Objects/World/Items/Deployables/LandingPad/BP_EdenStationLandingPad_Player.BP_EdenStationLandingPad_Player_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_EdenStationLandingPad_Player_C : public ABP_WorldObject_C, public IPlayerLandingPadSnapInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_D;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_C;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_B;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_LandingPad_T4_Base_Metal;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) ULandingPadComponent* LandingPad;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B3;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A3;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A2;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B2;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B1;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A1;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LandingL;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Left_Slot;  // 0x03A8, size 0x8, named "Left Slot"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Right_Slot;  // 0x03B0, size 0x8, named "Right Slot"

    UFUNCTION(BlueprintCallable) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_EdenStationLandingPad_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetSnapPoint() const;  // parameters 0xC
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsEdenPad() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleLights(bool LightsOn);  // parameters 0x1
};
