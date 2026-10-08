// /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/Nvidia/Streamline/Source/StreamlineBlueprint/Public/StreamlineLibraryDLSSG.h

UCLASS(MinimalAPI)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDLSSGMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static UStreamlineDLSSGMode GetDLSSGMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static UStreamlineDLSSGMode GetDefaultDLSSGMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDLSSGSupported();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static UStreamlineDLSSGSupport QueryDLSSGSupport();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);  // parameters 0x1
};
