// /Script/Icarus.ProspectSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/Subsystems/GameInstance/ProspectSubsystem.h

UCLASS()
class UProspectSubsystem : public UGameInstanceSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FCustomProspectStatsUpdatedSignature CustomProspectStatsUpdated;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintReadWrite) ELobbyPrivacy SelectedLobbyPrivacy;  // 0x00F0, size 0x1
    UPROPERTY() bool bRequiresSessionUpdate;  // 0x00F1, size 0x1
protected:
    UPROPERTY(EditAnywhere) FProspectInfo ActiveProspect;  // 0x0030, size 0xA0
    UPROPERTY(EditAnywhere) TArray<FCustomGameSetting> CustomGameSettings;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere) FProspectSaveState ActiveProspectSaveState;  // 0x00F8, size 0xF8
public:
    UFUNCTION(BlueprintCallable) static bool DeleteExistingLocalOutpost(FString OutpostName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool DeleteProspect(FString ProspectId, int32 ChrSlot);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) FIcarusProspect GetActiveProspectData() const;  // parameters 0x2D0
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetActiveProspectID() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FProspectInfo GetActiveProspectInfo() const;  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) FProspectListRowHandle GetActiveProspectRowHandle() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetBackupProspectFilePath(FString ProspectFileName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCustomProspectSettingValue(FCustomGameStatsRowHandle CustomSetting) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FCustomGameSetting> GetCustomProspectSettings() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FCustomGameSetting> GetDefaultCustomProspectSettings();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDeveloperProspectFilePath(FString ProspectFileName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDirectoryForBackupProspects();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDirectoryForDeveloperProspects();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDirectoryForLocalOutposts();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDirectoryForProspects();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FExistingOutpostData> GetExistingOutpostArchivesOfType(FString ProspectRowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FExistingOutpostData> GetExistingOutpostsOfType(FString ProspectRowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetOutpostProspectFilePath(const FProspectInfo& ProspectInfo);  // parameters 0xB0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIcarusProspect GetProspectDataFromProspectInfo(const FProspectInfo& ProspectInfo);  // parameters 0x370
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProspectListRowHandle GetProspectRowHandleFromProspectInfo(const FProspectInfo& ProspectInfo);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetSavedDeveloperProspectFileNames();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetTestProspectID();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasActiveProspect() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActiveProspectBackendCompatible() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsOpenWorldProspect(const FProspectInfo& ProspectInfo);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsOutpostProspect(const FProspectInfo& ProspectInfo);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerStillAssociatedWithActiveProspect(FString PlayerId, int32 ChrSlot) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsProspectBackendCompatible(const FProspectInfo& ProspectInfo);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsTestProspect(const FProspectInfo& ProspectInfo);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTestProspectActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LoadProspectSaveHeader(FString ProspectFilePath, FProspectSaveStateHeader& OutProspectSaveStateHeader);  // parameters 0xF9
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetCustomProspectSettings(const TArray<FCustomGameSetting>& NewCustomSettings, bool bPushToServer);  // parameters 0x11
};
