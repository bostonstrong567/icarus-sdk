// /Game/BP/AI/GOAP/AI/BP_NPC_Ape_Juvenile_Character_004.BP_NPC_Ape_Juvenile_Character_004_C
// Derives from: ABP_NPC_Ape_Juvenile_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD28, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ape_Juvenile_Character_004_C : public ABP_NPC_Ape_Juvenile_Character_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Bunker_Prop_2;  // 0x0D18, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* DeathMontage;  // 0x0D20, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Ape_Juvenile_Character_004(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_174BECFA42D4C3ACACF006A4799C454A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_174BECFA42D4C3ACACF006A4799C454A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_174BECFA42D4C3ACACF006A4799C454A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_174BECFA42D4C3ACACF006A4799C454A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_174BECFA42D4C3ACACF006A4799C454A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
};
