// /Script/FMODStudio.FMODSettings
// Derives from: UObject
// size 0x170, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODSettings.h

UCLASS(Config=Engine)
class UFMODSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool bLoadAllBanks;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bLoadAllSampleData;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableLiveUpdate;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableEditorLiveUpdate;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere, Config) FDirectoryPath BankOutputDirectory;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EFMODSpeakerMode> OutputFormat;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FFMODProjectLocale> Locales;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bVol0Virtual;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, Config) float Vol0VirtualLevel;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 SampleRate;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bMatchHardwareSampleRate;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, Config) int32 RealChannelCount;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 TotalChannelCount;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 DSPBufferLength;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 DSPBufferCount;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 FileBufferSize;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 StudioUpdatePeriod;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere, Config) FString InitialOutputDriverName;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bLockAllBuses;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, Config) FCustomPoolSizes MemoryPoolSizes;  // 0x0094, size 0x14
    UPROPERTY(EditAnywhere, Config) int32 LiveUpdatePort;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 EditorLiveUpdatePort;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 ReloadBanksDelay;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bEnableMemoryTracking;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FString> PluginFiles;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ContentBrowserPrefix;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ForcePlatformName;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString MasterBankName;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString SkipLoadBankName;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString StudioBankKey;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere, Config) FString WavWriterPath;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EFMODLogging> LoggingLevel;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, Config) FString OcclusionParameter;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere, Config) FString AmbientVolumeParameter;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, Config) FString AmbientLPFParameter;  // 0x0150, size 0x10
    TArray<FString,TSizedDefaultAllocator<32> > GeneratedFolders;  // 0x0160, not reflected
};
