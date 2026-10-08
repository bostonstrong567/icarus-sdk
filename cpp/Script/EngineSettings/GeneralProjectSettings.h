// /Script/EngineSettings.GeneralProjectSettings
// Derives from: UObject
// size 0x110, declared in Engine/Source/Runtime/EngineSettings/Classes/GeneralProjectSettings.h

UCLASS(Config=Game)
class UGeneralProjectSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) FString CompanyName;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) FString CompanyDistinguishedName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FString CopyrightNotice;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) FString Description;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config) FString Homepage;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config) FString LicensingTerms;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, Config) FString PrivacyPolicy;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) FGuid ProjectID;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ProjectName;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ProjectVersion;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString SupportContact;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, Config) FText ProjectDisplayedTitle;  // 0x00D8, size 0x18
    UPROPERTY(EditAnywhere, Config) FText ProjectDebugTitleInfo;  // 0x00F0, size 0x18
    UPROPERTY(EditAnywhere, Config) bool bShouldWindowPreserveAspectRatio;  // 0x0108, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bUseBorderlessWindow;  // 0x0109, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bStartInVR;  // 0x010A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowWindowResize;  // 0x010B, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowClose;  // 0x010C, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowMaximize;  // 0x010D, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowMinimize;  // 0x010E, size 0x1
};
