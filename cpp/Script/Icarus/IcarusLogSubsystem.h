// /Script/Icarus.IcarusLogSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/Subsystems/GameInstance/IcarusLogSubsystem.h

UCLASS()
class UIcarusLogSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY(BlueprintReadOnly) TArray<FIcarusLogEntry> LogList;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FIcarusLogEntryAddedDelegate OnLogEntryAdded;  // 0x0040, size 0x10

    UFUNCTION(BlueprintCallable) void AddEntry(FLogCategoriesEnum Category, ELevel Level, FString Message);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void Error(FLogCategoriesEnum Category, FString Message);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Log(FLogCategoriesEnum Category, FString Message);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Warn(FLogCategoriesEnum Category, FString Message);  // parameters 0x20
};
