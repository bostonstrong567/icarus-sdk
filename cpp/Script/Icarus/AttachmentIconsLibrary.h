// /Script/Icarus.AttachmentIconsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/AttachmentIcons/AttachmentIconsLibrary.h

UCLASS()
class UAttachmentIconsLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToAttachmentIconsTable(FName Name, FAttachmentIcon Data, FAttachmentIconsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x79
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakAttachmentIconsEnum(FAttachmentIconsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FAttachmentIconsRowHandle CastToAttachmentIconsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FAttachmentIconsEnum A, FAttachmentIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FAttachmentIconsRowHandleFAttachmentIconsRowHandle(FAttachmentIconsRowHandle RowHandleA, FAttachmentIconsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetAttachmentIconsStruct(FAttachmentIconsRowHandle RowHandle, FAttachmentIcon& AttachmentIcons, EValid& Paths);  // parameters 0x71
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsRowHandle MakeAttachmentIcons(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsEnum MakeAttachmentIconsEnum(FAttachmentIconsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsRowHandle MakeAttachmentIconsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsRowHandle MakeLiteralAttachmentIcons(FAttachmentIconsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FAttachmentIconsEnum A, FAttachmentIconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FAttachmentIconsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromAttachmentIconsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsEnum RowHandleToStruct(FAttachmentIconsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FAttachmentIconsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FAttachmentIconsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAttachmentIconsRowHandle StructToRowHandle(FAttachmentIconsEnum EnumValue);  // parameters 0x28
};
