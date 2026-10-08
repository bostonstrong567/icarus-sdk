// /Script/Icarus.GravestoneBase
// Derives from: AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x6D0, declared in Icarus/Source/Icarus/Objects/Gravestone.h

UCLASS(Config=Engine)
class AGravestoneBase : public AIcarusCorpse
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FPlayerCharacterID AssignedPlayerCharacterID;  // 0x05B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> RagdollHitEventBones;  // 0x05C8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FGravestoneData GravestoneData;  // 0x05D8, size 0xE0
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FArmourRowHandle> PlayerArmour;  // 0x06B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWasReloaded;  // 0x06C8, size 0x1

    UFUNCTION(BlueprintNativeEvent) void OnRep_AssignedPlayerCharacterID();
    UFUNCTION(BlueprintNativeEvent) void OnRep_GravestoneData();
    UFUNCTION(BlueprintNativeEvent) void OnRep_PlayerArmour();
    UFUNCTION(BlueprintCallable) void SetGravestoneData(const FGravestoneData& InData);  // parameters 0xE0
    UFUNCTION(BlueprintCallable) void SetHitEventsEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlayerArmour(TArray<FArmourRowHandle> InArmour);  // parameters 0x10

    // Virtual functions that start here:
    //   OnRep_AssignedPlayerCharacterID_Implementation, OnRep_GravestoneData_Implementation
    //   OnRep_PlayerArmour_Implementation
};
