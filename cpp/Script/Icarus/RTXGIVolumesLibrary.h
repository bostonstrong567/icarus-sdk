// /Script/Icarus.RTXGIVolumesLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RTXGIVolumes/RTXGIVolumesLibrary.h

UCLASS()
class URTXGIVolumesLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRTXGIVolumesTable(FName Name, FRTXGIVolumes Data, FRTXGIVolumesRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x109
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRTXGIVolumesEnum(FRTXGIVolumesEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRTXGIVolumesRowHandle CastToRTXGIVolumesRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRTXGIVolumesEnum A, FRTXGIVolumesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRTXGIVolumesRowHandleFRTXGIVolumesRowHandle(FRTXGIVolumesRowHandle RowHandleA, FRTXGIVolumesRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRTXGIVolumesStruct(FRTXGIVolumesRowHandle RowHandle, FRTXGIVolumes& RTXGIVolumes, EValid& Paths);  // parameters 0x101
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesRowHandle MakeLiteralRTXGIVolumes(FRTXGIVolumesRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesRowHandle MakeRTXGIVolumes(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesEnum MakeRTXGIVolumesEnum(FRTXGIVolumesEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesRowHandle MakeRTXGIVolumesFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRTXGIVolumesEnum A, FRTXGIVolumesEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRTXGIVolumesEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRTXGIVolumesTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesEnum RowHandleToStruct(FRTXGIVolumesRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRTXGIVolumesEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRTXGIVolumesEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRTXGIVolumesRowHandle StructToRowHandle(FRTXGIVolumesEnum EnumValue);  // parameters 0x28
};
