// /Script/Icarus.FlagSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x60, declared in Icarus/Source/Icarus/Subsystems/GameInstance/FlagSubsystem.h

UCLASS()
class UFlagSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FCharacterFlagsUpdatedSignature OnCharacterFlagsUpdated;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FSessionFlagsUpdatedSignature OnSessionFlagsUpdated;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FAccountFlagsUpdatedSignature OnAccountFlagsUpdated;  // 0x0050, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAccountFlagPlayer(AIcarusPlayerState* PlayerState, const FAccountFlagsRowHandle& AccountFlag) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasCharacterFlagPlayer(AIcarusPlayerState* PlayerState, const FCharacterFlagsRowHandle& CharacterFlag) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasFlagPlayer(AIcarusPlayerState* PlayerState, const FFlagsMultiRowHandle& Flag) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPackageFlagPlayer(AIcarusPlayerState* PlayerState, const FDLCPackageDataRowHandle& PackageFlag) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasSessionFlag(const FSessionFlagsRowHandle& SessionFlag) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ServerSetAccountFlagForPlayer(AIcarusPlayerState* PlayerState, const FAccountFlagsRowHandle& AccountFlag, bool State);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ServerSetAccountFlagsForPlayer(AIcarusPlayerState* PlayerState, const TMap<FAccountFlagsRowHandle, bool>& FlagMap);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ServerSetCharacterFlagForPlayer(AIcarusPlayerState* PlayerState, const FCharacterFlagsRowHandle& CharacterFlag, bool State);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ServerSetCharacterFlagsForPlayer(AIcarusPlayerState* PlayerState, const TMap<FCharacterFlagsRowHandle, bool>& FlagMap);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ServerSetSessionFlag(const FSessionFlagsRowHandle& SessionFlag, bool State);  // parameters 0x19
};
