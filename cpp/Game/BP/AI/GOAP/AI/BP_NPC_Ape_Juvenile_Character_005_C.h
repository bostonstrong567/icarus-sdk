// /Game/BP/AI/GOAP/AI/BP_NPC_Ape_Juvenile_Character_005.BP_NPC_Ape_Juvenile_Character_005_C
// Derives from: ABP_NPC_Ape_Juvenile_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD28, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ape_Juvenile_Character_005_C : public ABP_NPC_Ape_Juvenile_Character_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* DeathMontage;  // 0x0D18, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_Ape_Wounded_005_C* WoundedApeObject;  // 0x0D20, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Ape_Juvenile_Character_005(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_2FBD84974A0289E5B68B9DBC3DBB06B6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_2FBD84974A0289E5B68B9DBC3DBB06B6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_2FBD84974A0289E5B68B9DBC3DBB06B6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_2FBD84974A0289E5B68B9DBC3DBB06B6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_2FBD84974A0289E5B68B9DBC3DBB06B6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_WoundedApeObject();
};
