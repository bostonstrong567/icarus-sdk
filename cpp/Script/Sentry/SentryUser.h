// /Script/Sentry.SentryUser
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryUser.h

UCLASS()
class USentryUser : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISentryUser,0> UserNativeImpl;  // 0x0028, private

    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<FString, FString> GetData() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetEmail() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetId() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetIpAddress() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetUsername() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetData(const TMap<FString, FString>& Data);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void SetEmail(FString Email);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetId(FString Id);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetIpAddress(FString IpAddress);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetUsername(FString Username);  // parameters 0x10
};
