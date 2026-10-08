// /Script/Icarus.LandingPadComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Objects/LandingPadComponent.h

UCLASS(Config=Engine)
class ULandingPadComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) int32 TimeBuilt;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) FPlayerCharacterID PlayerID;  // 0x00B8, size 0x18

    UFUNCTION(BlueprintCallable) void AssignPlayer(const FPlayerCharacterID& InPlayerID);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ClearAssignedPlayer();
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerCharacterID GetPlayerID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetPlayerName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTimeBuilt() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPlayer() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitTimeBuilt(int32 InTimeBuilt);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerAssigned(const FPlayerCharacterID& InID) const;  // parameters 0x19
};
